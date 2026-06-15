// fichero 18109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18109;

Registro18109 crear_registro18109(int id) {
    Registro18109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
