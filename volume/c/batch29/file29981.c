// fichero 29981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29981;

Registro29981 crear_registro29981(int id) {
    Registro29981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
