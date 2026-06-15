// fichero 30149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30149;

Registro30149 crear_registro30149(int id) {
    Registro30149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
