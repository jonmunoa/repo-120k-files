// fichero 1669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1669;

Registro1669 crear_registro1669(int id) {
    Registro1669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
