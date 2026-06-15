// fichero 7897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7897;

Registro7897 crear_registro7897(int id) {
    Registro7897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
