// fichero 43781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43781;

Registro43781 crear_registro43781(int id) {
    Registro43781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
