// fichero 15781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15781;

Registro15781 crear_registro15781(int id) {
    Registro15781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
