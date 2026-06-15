// fichero 19817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19817;

Registro19817 crear_registro19817(int id) {
    Registro19817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
