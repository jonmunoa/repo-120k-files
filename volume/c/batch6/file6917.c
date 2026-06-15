// fichero 6917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6917;

Registro6917 crear_registro6917(int id) {
    Registro6917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
