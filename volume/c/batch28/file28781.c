// fichero 28781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28781;

Registro28781 crear_registro28781(int id) {
    Registro28781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
