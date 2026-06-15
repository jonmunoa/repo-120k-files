// fichero 19797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19797;

Registro19797 crear_registro19797(int id) {
    Registro19797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
