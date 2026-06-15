// fichero 31881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31881;

Registro31881 crear_registro31881(int id) {
    Registro31881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
