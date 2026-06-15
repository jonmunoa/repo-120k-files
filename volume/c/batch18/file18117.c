// fichero 18117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18117;

Registro18117 crear_registro18117(int id) {
    Registro18117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
