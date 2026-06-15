// fichero 20917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20917;

Registro20917 crear_registro20917(int id) {
    Registro20917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
