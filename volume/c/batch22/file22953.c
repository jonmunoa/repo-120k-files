// fichero 22953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22953;

Registro22953 crear_registro22953(int id) {
    Registro22953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
