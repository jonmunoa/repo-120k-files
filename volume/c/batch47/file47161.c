// fichero 47161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47161;

Registro47161 crear_registro47161(int id) {
    Registro47161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
