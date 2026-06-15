// fichero 27785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27785;

Registro27785 crear_registro27785(int id) {
    Registro27785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
