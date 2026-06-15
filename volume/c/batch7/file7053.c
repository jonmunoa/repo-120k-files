// fichero 7053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7053;

Registro7053 crear_registro7053(int id) {
    Registro7053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
