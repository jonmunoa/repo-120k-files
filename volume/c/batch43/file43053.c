// fichero 43053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43053;

Registro43053 crear_registro43053(int id) {
    Registro43053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
