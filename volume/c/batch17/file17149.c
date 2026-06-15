// fichero 17149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17149;

Registro17149 crear_registro17149(int id) {
    Registro17149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
