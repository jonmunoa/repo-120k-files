// fichero 9741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9741;

Registro9741 crear_registro9741(int id) {
    Registro9741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
