// fichero 40853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40853;

Registro40853 crear_registro40853(int id) {
    Registro40853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
