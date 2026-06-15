// fichero 21617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21617;

Registro21617 crear_registro21617(int id) {
    Registro21617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
