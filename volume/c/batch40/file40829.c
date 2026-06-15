// fichero 40829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40829;

Registro40829 crear_registro40829(int id) {
    Registro40829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
