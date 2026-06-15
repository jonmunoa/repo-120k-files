// fichero 40937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40937;

Registro40937 crear_registro40937(int id) {
    Registro40937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
