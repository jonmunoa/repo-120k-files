// fichero 1781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1781;

Registro1781 crear_registro1781(int id) {
    Registro1781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
