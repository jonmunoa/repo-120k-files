// fichero 37161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37161;

Registro37161 crear_registro37161(int id) {
    Registro37161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
