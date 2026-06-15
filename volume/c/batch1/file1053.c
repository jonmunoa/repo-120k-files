// fichero 1053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1053;

Registro1053 crear_registro1053(int id) {
    Registro1053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
