// fichero 17877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17877;

Registro17877 crear_registro17877(int id) {
    Registro17877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
