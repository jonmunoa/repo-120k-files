// fichero 31777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31777;

Registro31777 crear_registro31777(int id) {
    Registro31777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
