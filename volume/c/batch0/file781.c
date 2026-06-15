// fichero 781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro781;

Registro781 crear_registro781(int id) {
    Registro781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
