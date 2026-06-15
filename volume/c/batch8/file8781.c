// fichero 8781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8781;

Registro8781 crear_registro8781(int id) {
    Registro8781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
