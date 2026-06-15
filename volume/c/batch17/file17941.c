// fichero 17941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17941;

Registro17941 crear_registro17941(int id) {
    Registro17941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
