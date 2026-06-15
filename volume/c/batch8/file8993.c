// fichero 8993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8993;

Registro8993 crear_registro8993(int id) {
    Registro8993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
