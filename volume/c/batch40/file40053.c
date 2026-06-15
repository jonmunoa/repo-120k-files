// fichero 40053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40053;

Registro40053 crear_registro40053(int id) {
    Registro40053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
