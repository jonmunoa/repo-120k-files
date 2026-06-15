// fichero 161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro161;

Registro161 crear_registro161(int id) {
    Registro161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
