// fichero 49845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49845;

Registro49845 crear_registro49845(int id) {
    Registro49845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
