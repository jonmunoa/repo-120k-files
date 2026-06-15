// fichero 17617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17617;

Registro17617 crear_registro17617(int id) {
    Registro17617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
