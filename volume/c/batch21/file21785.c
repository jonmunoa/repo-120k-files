// fichero 21785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21785;

Registro21785 crear_registro21785(int id) {
    Registro21785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
