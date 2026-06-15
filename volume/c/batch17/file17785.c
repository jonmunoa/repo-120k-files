// fichero 17785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17785;

Registro17785 crear_registro17785(int id) {
    Registro17785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
