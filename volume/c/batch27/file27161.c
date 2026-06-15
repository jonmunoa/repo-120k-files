// fichero 27161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27161;

Registro27161 crear_registro27161(int id) {
    Registro27161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
