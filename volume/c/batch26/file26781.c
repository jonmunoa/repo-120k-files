// fichero 26781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26781;

Registro26781 crear_registro26781(int id) {
    Registro26781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
