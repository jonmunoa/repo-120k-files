// fichero 31557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31557;

Registro31557 crear_registro31557(int id) {
    Registro31557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
