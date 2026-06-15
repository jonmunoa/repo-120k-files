// fichero 38153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38153;

Registro38153 crear_registro38153(int id) {
    Registro38153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
