// fichero 39565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39565;

Registro39565 crear_registro39565(int id) {
    Registro39565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
