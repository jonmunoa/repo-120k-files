// fichero 29121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29121;

Registro29121 crear_registro29121(int id) {
    Registro29121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
