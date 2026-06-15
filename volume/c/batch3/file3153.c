// fichero 3153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3153;

Registro3153 crear_registro3153(int id) {
    Registro3153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
