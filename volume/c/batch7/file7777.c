// fichero 7777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7777;

Registro7777 crear_registro7777(int id) {
    Registro7777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
