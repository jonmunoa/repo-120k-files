// fichero 19781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19781;

Registro19781 crear_registro19781(int id) {
    Registro19781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
