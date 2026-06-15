// fichero 22897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22897;

Registro22897 crear_registro22897(int id) {
    Registro22897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
