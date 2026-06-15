// fichero 28885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28885;

Registro28885 crear_registro28885(int id) {
    Registro28885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
