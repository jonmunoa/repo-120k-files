// fichero 22929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22929;

Registro22929 crear_registro22929(int id) {
    Registro22929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
