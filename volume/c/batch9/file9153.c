// fichero 9153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9153;

Registro9153 crear_registro9153(int id) {
    Registro9153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
