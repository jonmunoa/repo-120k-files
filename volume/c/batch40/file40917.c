// fichero 40917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40917;

Registro40917 crear_registro40917(int id) {
    Registro40917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
