// fichero 8741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8741;

Registro8741 crear_registro8741(int id) {
    Registro8741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
