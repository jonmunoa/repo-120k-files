// fichero 40773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40773;

Registro40773 crear_registro40773(int id) {
    Registro40773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
