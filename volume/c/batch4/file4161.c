// fichero 4161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4161;

Registro4161 crear_registro4161(int id) {
    Registro4161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
